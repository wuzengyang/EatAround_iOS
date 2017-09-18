//
//  YelpDataStore.m
//  SummerYelpMock
//
//  Created by Zengyang Wu on 9/3/17.
//  Copyright © 2017 Zengyang Wu. All rights reserved.
//

#import "YelpDataStore.h"
@implementation YelpDataStore

+ (YelpDataStore *)sharedInstance {
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}
@end
