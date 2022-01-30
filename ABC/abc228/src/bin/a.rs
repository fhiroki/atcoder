use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        s: u8,
        mut t: u8,
        x: u8
    }
    if t == 0 {
        t = 24;
    }
    if s < t && x >= s && x < t {
        println!("Yes");
    } else if s > t && (x < t || x >= s) {
        println!("Yes");
    } else {
        println!("No");
    }
}
