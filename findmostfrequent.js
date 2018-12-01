var mostFrequent = null, mostFrequentItem;

var arr=['s','s','f','s','t','s'];

arr.sort();

for (var i = 0 ; i<arr.length; i++) {
     
      var single = arr[i];
      var total= (arr.lastIndexOf(single) - arr.indexOf(single)+1);
      if(total > mostFrequent) {
           mostFrequentItem=arr[i];
           mostFrequent=total;
           i=arr.lastIndexOf(single)+1;
      }
}

console.log(mostFrequent);
console.log(mostFrequentItem);