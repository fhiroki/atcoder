use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u64
    }
    let ans = (1..1000000)
        .filter(|i| format!("{}{}", i, i).parse::<u64>().unwrap() <= n)
        .count();
    println!("{}", ans);
}
