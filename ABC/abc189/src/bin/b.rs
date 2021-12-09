use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        x: u64,
    }

    let mut sum: u64 = 0;
    for i in 0..n {
        input! {
            v: u64,
            p: u64
        }
        sum += v * p;
        if sum > x * 100 {
            println!("{}", i + 1);
            return;
        }
    }

    println!("-1");
}
