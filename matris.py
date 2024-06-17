import numpy as np 
matris1 = np.array([[1, 2, 3, 4, 5],
 [6, 9, 8, 9, 0],
 [4, 3, 6, 1, 5],
 [0, 9, 0, 7, 6],
 [5, 5, 3, 2, 1]])
matris2 = np.array([[0, 1, 2, 3, 4],
 [5, 3, 7, 8, 1],
 [4, 3, 0, 1, 0],
 [3, 9, 7, 6, 5],
 [0, 1, 2, 8, 4]])

bolum_matris = np.zeros((5, 5)) 
for i in range(5):
  for j in range(5): 
    if matris2[i][j] != 0: 
      bolum_matris[i][j] = matris1[i][j] / matris2[i][j]
print("Bölüm Matrisi:")
print(bolum_matris)
