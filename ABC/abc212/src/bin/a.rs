use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u8,
        b: u8
    }
    if a > 0 && b == 0 {
        println!("Gold");
    } else if a == 0 && b > 0 {
        println!("Silver");
    } else {
        println!("Alloy");
    }
}
