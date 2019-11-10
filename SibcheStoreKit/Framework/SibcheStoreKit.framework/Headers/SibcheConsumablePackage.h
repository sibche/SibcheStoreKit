//
//  SibcheConsumablePackage.h
//  SibcheStoreKit
//
//  Created by Mehdi on 4/13/19.
//  Copyright © 2019 Sibche. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SibchePackage.h"

NS_ASSUME_NONNULL_BEGIN

@interface SibcheConsumablePackage : SibchePackage

- (instancetype)initWithData:(NSDictionary*)data;
- (NSString *)toJson;

@end

NS_ASSUME_NONNULL_END