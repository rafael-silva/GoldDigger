//
//  GDGRelation.h
//  GoldDigger
//
//  Created by Pietro Caselani on 1/26/16.
//

#import <Foundation/Foundation.h>
#import "GDGEntity.h"
#import "GDGEntityManager.h"

@class GDGCondition;
@class GDGSource;

@interface GDGRelation : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GDGEntityManager *manager;
@property (strong, nonatomic) GDGEntityManager *relatedManager;
@property (strong, nonatomic) NSString *foreignProperty;
@property (strong, nonatomic) GDGCondition *condition;

- (instancetype)initWithName:(NSString *)name manager:(GDGEntityManager *)manager;

- (void)fill:(NSArray<GDGEntity *> *)entities withProperties:(NSArray<NSString *> *)properties;

- (NSString *)joinCondition;

- (NSString *)joinConditionForSource:(GDGSource *)source withSource:(GDGSource *)joinedSource;

@end
