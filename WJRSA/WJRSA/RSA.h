//
//  RSA.h
//  Kevin
//
//  Created by Kevin on 13/1/14.
//  Copyright (c) 2013年 Kevin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSA : NSObject

/**
 *  RSA加密
 */
- (NSString *)encryptString:(NSString *)string;
/**
 *  RSA解密
 */
- (NSString *)decryptString:(NSString *)string;

@end
