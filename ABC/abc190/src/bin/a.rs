use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: i8,
        b: i8,
        c: i8
    }
    if a > b - c {
        println!("Takahashi");
    } else {
        println!("Aoki");
    }
}
