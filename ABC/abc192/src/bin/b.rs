use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String
    }
    for (i, c) in s.chars().enumerate() {
        if i % 2 == 0 {
            if c.is_uppercase() {
                println!("No");
                return;
            }
        } else {
            if c.is_lowercase() {
                println!("No");
                return;
            }
        }
    }
    println!("Yes");
}
