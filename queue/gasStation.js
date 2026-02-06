/**
 * @param {number[]} gas
 * @param {number[]} cost
 * @return {number}
 * https://leetcode.com/problems/gas-station/
 */

var canCompleteCircuit = function (gas, cost) {
  let n = gas.length;
  let tankCap = 0;
  let flag = false;
  let count = 0;
  let startOfTour = -1;
  let i = 0;

  while (count < 2 * n) {
    if (i == startOfTour) return i;
    tankCap += gas[i];

    if (tankCap >= cost[i]) {
      flag = true;
      if (startOfTour == -1) {
        startOfTour = i;
      }
      tankCap -= cost[i];
      i = (i + 1) % n;
      count++;
    } else {
      startOfTour = -1;
      i = (i + 1) % n;
      tankCap = 0;
      count++;
      flag = false;
    }
  }

  return -1;
};

let gas = [1, 2, 3, 4, 5];
let cost = [3, 4, 5, 1, 2];

console.log(canCompleteCircuit(gas, cost));
