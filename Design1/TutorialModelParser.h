// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialModel;

/// Protocol to be implemented by object with handles the conversion of \c NSData to a concrete
/// \c TutorialModel object.
@protocol TutorialModelParser <NSObject>

/// Returns \c TutorialModel object obtained from the given \c data.
- (id<TutorialModel>)tutorialModelWithData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
