use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u32,
        k: u32,
        a: u32
    }
    if (k + a - 1) % n == 0 {
        println!("{}", n);
    } else {
        println!("{}", (k + a - 1) % n);
    }
}
