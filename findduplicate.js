var arr=[4,5,6,7,6,5,7,8,8,9,9];
var sorted_arr=arr.slice().sort();

var results=[];

for(var i = 0; i<sorted_arr.length-1; i++)
 {
     if(sorted_arr[i+1]== sorted_arr[i])
     {
         results.push(sorted_arr[i]);
     }
}

console.log(results);

