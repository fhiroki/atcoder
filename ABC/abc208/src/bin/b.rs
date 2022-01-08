use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut p: u64
    }
    let mut ans = 0;
    while p != 0 {
        let mut n: u64 = 1;
        for i in 2..100 {
            if n * i > p {
                p -= n;
                break;
            }
            n *= i;
        }
        ans += 1;
    }
    println!("{}", ans);
}
