// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialModel;

@protocol TutorialModelParser <NSObject>

- (id<TutorialModel>)tutorialModelWithData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
