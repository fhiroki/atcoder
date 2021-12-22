use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        a: u32,
        b: u32,
        mut w: u32,
    }
    w *= 1000;
    if w / a == w / b && w % a != 0 && w % b != 0 {
        println!("UNSATISFIABLE");
    } else {
        println!("{} {}", ((w + b - 1) / b), w / a);
    }
}
