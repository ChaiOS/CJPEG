// swift-tools-version:4.0

import PackageDescription

let package = Package(
    name: "CJPEG",
    pkgConfig: "libjpeg",
    providers: [
        .apt(["libjpeg-dev"]),
        .brew(["jpeg"])
    ],
    products: [
        .library(name: "CJPEG", targets: ["CJPEG"])
    ],
    targets: [
        .target(name: "CJPEG")
    ]
)
