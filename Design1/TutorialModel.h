// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

NS_ASSUME_NONNULL_BEGIN

/// Object used to represent an tutorial that is suppose to be rendered on screen. The data itself
/// is not defined by the protocol and implementations should define actual data types and ways to
// set and retrieve it.
@protocol TutorialModel <NSObject>

/// Unique id of a tutorial.
@property (readonly, nonatomic) NSString *tutorialId;

@end

NS_ASSUME_NONNULL_END
