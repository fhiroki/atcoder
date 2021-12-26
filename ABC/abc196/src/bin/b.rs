use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        x: String
    }
    println!("{}", x.split('.').collect::<Vec<&str>>()[0]);
}
