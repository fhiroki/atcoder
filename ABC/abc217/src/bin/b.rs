use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: [String; 3]
    }
    for contest in vec!["ABC", "ARC", "AGC", "AHC"] {
        if !s.contains(&contest.to_string()) {
            println!("{}", contest);
        }
    }
}
