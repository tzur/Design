// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialModelParser;

/// Object which handles the creation of image tutorial object located on disk, from
/// \c TutorialModel.
@interface DiskImageTutorialModelParser : NSObject <TutorialModelParser>
@end

NS_ASSUME_NONNULL_END
