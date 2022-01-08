use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u16,
        b: u16,
    }
    if a <= b && b <= a * 6 {
        println!("Yes");
    } else {
        println!("No");
    }
}
