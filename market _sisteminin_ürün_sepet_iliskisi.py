#1.dosya ismi: item.py
class Item:
    def __init__(self, barcodeNo, itemName, price, count):
        self.barcodeNo = barcodeNo
        self.itemName = itemName
        self.price = price
        self.count = count  # Ürünün stokta olup olmadığı
    
    def getPrice(self):
        return self.price      
                                  
                                
    def increaseCount(self, miktar):  # Stok miktarını artırma
        if self.count >= miktar:
            self.count += miktar
        else:
            print(f"Dikkat: '{self.itemName}' ürününde yeterli stok yok! Mevcut stok: {self.count}, İstenilen miktar: {miktar}\n")

#2.dosya ismi: basket.py
from item import Item 

class Basket:
    def __init__(self, ID):
        self.ID = ID
        self.items = []
           
    def addItem(self, item):
        if len(self.items) < 3:
            if item.count > 0:
                self.items.append(item)
            else:
                print(f"Dikkat: '{item.itemName}' ürünü stok yetersizliği nedeniyle sepete eklenemedi.")
        else:
            print(f"Dikkat: 3'ten fazla ürün sepete eklenemez! '{item.itemName}' ürünü eklenemez!")
            
    def basketInfo(self):  # Terminale bilgi yazdırma
        for item in self.items:
            self.ID +=1
            print(f"ID: {self.ID}, BarcodeNo: {item.barcodeNo}, Item: {item.itemName}, Price: {item.price}, Count: {item.count}")
    
    def calculateTotalPrice(self):
        total_price = sum(item.getPrice() for item in self.items)
        discount = 0
        if total_price >= 750:
            discount = 0.35
        elif total_price >= 500:
            discount = 0.25
        elif total_price >= 300:
            discount = 0.10
        
        total_price_after_discount = total_price * (1 - discount)
        return total_price_after_discount

#3.dosya ismi: main.py
from item import Item 
from basket import Basket

#ürünler
ürün1 = Item(123456, "Kitap", 500, 10)
ürün2 = Item(789012, "Kulaklık", 600, 5)
ürün3 = Item(345678, "Oyun", 1000, 0)
ürün4 = Item(124356, "Kalem", 100, 2)
ürün5 = Item(567890, "Hesap makinesi", 400, 4)

basket = Basket(ID=0)

basket.addItem(ürün1)
basket.addItem(ürün2)
basket.addItem(ürün3)
basket.addItem(ürün4)
basket.addItem(ürün5)


ürün4.increaseCount(4)
basket.basketInfo()
print("Toplam ücret:", basket.calculateTotalPrice())
