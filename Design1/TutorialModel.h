// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TutorialModel : NSObject

- (instancetype)initWithTutorialId:(NSString *)tutorialId tutorialData:(NSData *)data;

@property (readonly, nonatomic) NSString *tutorialId;

@property (readonly, nonatomic) NSData *tutorialData;

@property (readonly, nonatomic) NSString *dataFormat;

@end

NS_ASSUME_NONNULL_END
