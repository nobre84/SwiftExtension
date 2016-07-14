//
//  ObjcClass+Swifty.swift
//  Pods
//
//  Created by Rafael Nobre on 14/07/16.
//
//

import UIKit

extension ObjcClass {
    
    /**
     Swifty version of `method`     
     */
    @nonobjc func method(key: String, format args: CVarArgType...) {
        withVaList(args) { self.__method(key, withFormatArgs: $0) }
        //return withVaList(args) { self.__localize(key, withFormatArgs: $0) }
        //return ""
    }
    
}