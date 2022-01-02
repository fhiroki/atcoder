use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        mut v: [u8; 3]
    }
    v.sort();
    if v[0] == v[1] {
        println!("{}", v[2]);
    } else if v[1] == v[2] {
        println!("{}", v[0]);
    } else {
        println!("0");
    }
}
