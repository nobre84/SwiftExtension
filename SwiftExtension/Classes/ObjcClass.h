//
//  ObjcClass.h
//  Pods
//
//  Created by Rafael Nobre on 14/07/16.
//
//

#import <Foundation/Foundation.h>

@interface ObjcClass : NSObject

/**
 *  ObjC var arg version of `method`
 */
- (void)method:(NSString *)key withFormat:(NSString*)format, ... NS_FORMAT_FUNCTION(2,3) NS_REFINED_FOR_SWIFT;

/**
 *  ObjC va_list version of `method`
 */
- (void)method:(NSString *)key withFormatArgs:(va_list)arguments NS_REFINED_FOR_SWIFT;

@end
