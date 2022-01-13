use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u8,
        b: u8,
    }
    for c in 0..=255 {
        if a ^ c == b {
            println!("{}", c);
            break;
        }
    }
}
