use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u32,
        b: u32
    }
    println!("{}", 32u32.pow(a - b));
}
