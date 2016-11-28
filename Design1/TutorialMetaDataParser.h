// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialMetaData;

@interface TutorialMetaDataParser : NSObject

- (NSArray<id<TutorialMetaData>> * _Nullable)tutorialMetaDataWithNSData:(NSData *)data
                                                   withError:(NSError * _Nullable *)error;

@end

NS_ASSUME_NONNULL_END
