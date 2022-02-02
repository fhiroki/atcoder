use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut a: u64,
        mut b: u64
    }
    while a > 0 || b > 0 {
        if a % 10 + b % 10 >= 10 {
            println!("Hard");
            return;
        }
        a /= 10;
        b /= 10;
    }
    println!("Easy");
}
