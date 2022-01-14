use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: u8,
    }
    if n <= 125 {
        println!(4);
    } else if n <= 211 {
        println!(6);
    } else {
        println!(8);
    }
}
