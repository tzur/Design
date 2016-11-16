// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialImage;

@interface Cache : NSObject <NSCoding>

- (NSArray<TutorialImage *> *)tutorialImages;

- (void)setImages:(NSArray<TutorialImage *> *)images;

@end

NS_ASSUME_NONNULL_END
