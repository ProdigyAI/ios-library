/* Copyright 2018 Urban Airship and Contributors */

#import <Foundation/Foundation.h>
#import "UAScheduleInfo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * JSON key for the schedule's actions.
 */
extern NSString *const UAActionScheduleInfoActionsKey;

/**
 * Builder class for UAActionScheduleInfo.
 */
@interface UAActionScheduleInfoBuilder : UAScheduleInfoBuilder

///---------------------------------------------------------------------------------------
/// @name Action Schedule Info Builder Properties
///---------------------------------------------------------------------------------------

/**
 * The schedule's group.
 */
@property(nonatomic, copy, nullable) NSString *group;

/**
 * Actions payload to run when the schedule is triggered.
 */
@property(nonatomic, strong, nullable) NSDictionary *actions;

@end

/**
 * Defines the scheduled action.
 */
@interface UAActionScheduleInfo : UAScheduleInfo

///---------------------------------------------------------------------------------------
/// @name Action Schedule Info Properties
///---------------------------------------------------------------------------------------

/**
 * The schedule's group.
 */
@property(nonatomic, readonly, nullable) NSString *group;

/**
 * Actions payload to run when the schedule is triggered.
 */
@property(nonatomic, readonly, nullable) NSDictionary *actions;

///---------------------------------------------------------------------------------------
/// @name Action Schedule Info Factories
///---------------------------------------------------------------------------------------

/**
 * Creates an action schedule info with a builder block.
 *
 * @return The action schedule info.
 */
+ (instancetype)scheduleInfoWithBuilderBlock:(void(^)(UAActionScheduleInfoBuilder *builder))builderBlock;

@end

NS_ASSUME_NONNULL_END


