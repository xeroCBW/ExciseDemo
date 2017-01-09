//
//  EnumTest.swift
//  OC2SwiftDemo
//
//  Created by 陈博文 on 17/1/6.
//  Copyright © 2017年 陈博文. All rights reserved.
//

import Foundation



enum ShareType {
    case QQ
    case WeiXin
    case WeiBo
    case JianShu
}


@objc enum CompassPoint: Int {
    case North = 100, South, East, West
}

enum Planet: Int {
    case mercury = 1, venus, earth, mars, jupiter, saturn, uranus, neptune
}
