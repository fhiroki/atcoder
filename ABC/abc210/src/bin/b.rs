use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        _: usize,
        s: String
    }
    if s.chars().position(|c| c == '1').unwrap() % 2 == 0 {
        println!("Takahashi");
    } else {
        println!("Aoki");
    }
}
