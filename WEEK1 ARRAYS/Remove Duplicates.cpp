// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:

// The judge will test your solution with the following code:

// int[] nums = [...]; // Input array
// int[] expectedNums = [...]; // The expected answer with correct length

// int k = removeDuplicates(nums); // Calls your implementation

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.

 

// Example 1:

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
 

// Constraints:

// 1 <= nums.length <= 3 * 104
// -100 <= nums[i] <= 100
// nums is sorted in non-decreasing order.


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j=0;j<nums.size();j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};

// Empieza con... Pues, este problema se usa con... se resuelve con... Se puede resolver de diferentes formas. Yo empecé resumiendola con otra, pero esa respuesta era muy lenta, entonces hice otra. Esto básicamente usa dos apuntadores, uno lento y uno rápido. Empieza I al lento y J al rápido. El I va a ser cero y va a aumentar únicamente dentro del IF. Y el J siempre va a aumentar cada iteración. Y entonces empezamos. Pues, empieza el IF, digo el FOR de la J, que va a iterar sobre todo el arreglo. Y cada iteración tiene un ciclo, bueno, una condición de IF. Que básicamente, si son diferentes, va a entrar al IF. Si no, se va a seguir el siguiente. Entonces, en el caso este del arreglo, pues empieza los dos en cero. Entonces empieza I cero, IJ cero, pues es igual, se aumenta la J. I cero, IJ cero, otra vez es igual, entonces aumenta la J. I cero, IJ uno, pues son diferentes, entonces la siguiente posición de I va a ser uno. Entonces ya empieza cero, uno. Ahora I va a ser igual a uno. Y J también aumenta uno. Entonces I1, IJ1, pues son iguales, entonces nada más aumenta J. I1, IJ2, pues son diferentes, entonces el siguiente de I va a ser igual a dos. Y aumenta I a la posición de, pues donde está el dos. Entonces sigue otra vez la comparación. I2 es igual a J2, que es el siguiente del dos. Pues son iguales, entonces no pasa nada y se aumenta la J. I2, IJ3, pues ahora sí son diferentes, entonces el siguiente de dos va a ser tres. Y se aumenta esa posición. Entonces ahora va a estar ahí. Y J va a aumentar al cuatro. Y como ya ahí se acaba el arreglo, pues ya no va a funcionar el four, porque ya no van a ser diferentes nunca, digo, van a ser diferentes. Y pues ya no va a haber duplicados, por así decirlo. Entonces nada más se agrega un más uno al final y se regresa I más uno. Que en este caso, pues va a ser cuatro, pero pues como se va a quedar en el tres, se tiene que hacer I más uno, que pues ahora sí va a ser cuatro. Entonces regresa uno, cero, uno, dos, tres, cuatro. Y esa sería la solución.