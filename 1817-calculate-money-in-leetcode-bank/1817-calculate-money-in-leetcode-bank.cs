// 2: 1
// 3: 2
// 4: 3
// 5: 4
// 6: 5
// 7: 6
// 8: 7
//---
// 2: 2 = 1 + 1
// 3: 3 = 2 + 1

// nth day: ceil(n / 7) = w
// (1 + 2 + 3 + ... + 7)  = s
// s + (s + 7) + (s + 14) + ... + (s + 7*(w-1))
// =  Sum(i = 0 -> w - 1)(s + 7*i)(total money of w week)
// = s*w + 7(0 + 1 + ... + w - 1)

// which date: n mod 7 = d
// monday that week m2
// (d -> 7) money = (m2 + d) + ... (m2 + 6) = 

public class Solution {
    public int TotalMoney(int n) {
        int week = (int)Math.Ceiling(n / 7.0); // n = 4 => week = 1

        int sum1To7  = 28;

        int dayInWeek = n % 7; // dayInWeek = 4
        if (dayInWeek == 0) dayInWeek = 7; // Sunday is day 7

        int totalMoneyOfWeek = week * sum1To7 + ((week - 1) * week/2) * 7;   // totalMoneyOfWeek = 28
        
        int moneyOnMondayThatWeek = week; // moneyOnMondayThatWeek = 1
        int moneyFromNthDayToNextSunday = (7 - dayInWeek) * (2 * moneyOnMondayThatWeek + dayInWeek + 6) / 2; // moneyFromNthDayToNextSunday = 18

        return totalMoneyOfWeek - moneyFromNthDayToNextSunday; // 28 - 18
    }
}