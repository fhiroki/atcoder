use proconio::{fastout, input, marker::Chars};

const MOD: i32 = 1e9 as i32 + 7;

#[fastout]
fn main() {
    input! {
        s: Chars,
    }
    let t: Vec<char> = "chokudai".chars().collect();
    let mut dp = vec![0; 9];
    dp[0] = 1;
    for i in 0..s.len() {
        for j in 0..8 {
            if s[i] == t[j] {
                dp[j + 1] += dp[j];
                dp[j + 1] %= MOD;
            }
        }
    }
    println!("{}", dp[8]);
}
