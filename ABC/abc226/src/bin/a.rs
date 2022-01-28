use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: f32
    }
    println!("{}", x.round())
}
