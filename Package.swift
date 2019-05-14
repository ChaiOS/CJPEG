// swift-tools-version:4.2

import PackageDescription

let package = Package(
    name: "CJPEG",
    products: [
        .library(name: "CJPEG", targets: ["CJPEG"])
    ],
    targets: [
        .systemLibrary(
            name: "CJPEG",
            pkgConfig: "libjpeg",
            providers: [
                .apt(["libjpeg-dev"]),
                .brew(["jpeg"])
            ]
        )
    ]
)
