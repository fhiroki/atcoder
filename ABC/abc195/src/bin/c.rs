use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u64
    }
    let mut ans: u64 = 0;
    for i in 1..=5 {
        let a = 10u64.pow(i * 3);
        if n < a {
            break;
        }
        ans += n - a + 1;
    }
    println!("{}", ans);
}
