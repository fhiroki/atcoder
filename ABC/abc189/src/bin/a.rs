use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String
    }
    let first = s.chars().nth(0).unwrap();
    if s.chars().all(|c| first == c) {
        println!("Won")
    } else {
        println!("Lost")
    }
}
