use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: String
    }
    let t = String::from("oxx").repeat(5);
    for i in 0..3 {
        if s == t[i..i + s.len()] {
            println!("Yes");
            return;
        }
    }
    println!("No");
}
