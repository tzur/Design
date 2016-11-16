// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@class TutorialModel;

typedef void (^TutorialImageCompletion)(NSArray<TutorialModel  *> * _Nullable,
                                        NSError * _Nullable error);

@protocol TutorialLoader <NSObject>


- (void)loadTutorialScreenTraitCollection:(UITraitCollection *)screenTraitCollection
                               completion:(TutorialImageCompletion)completion;

@end

NS_ASSUME_NONNULL_END
