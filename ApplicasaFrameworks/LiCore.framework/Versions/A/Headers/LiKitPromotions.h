//
//  LiKitPromotions.h
//  LiCore
//
//  Created by Applicasa
//  Copyright (c) 2012 LiCore All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LiCore/Promotion.h>
#import <LiCore/LiKitPromotionsConstants.h>

@interface LiKitPromotions : NSObject

+ (NSDictionary *) getPromotionsFieldsDictionary;
+ (NSDictionary *) getProfileSettingsFieldsDictionary;
+ (NSDictionary *) getAnalyticsFieldsDictionary;

+ (void) setLiKitPromotionsDelegate:(id <LiKitPromotionsDelegate>)delegate;

//User Profile
+ (LiSpendProfile) getCurrentUserSpendProfile;
+ (LiUsageProfile) getCurrentUserUsageProfile;

//Level
+ (void) startLevel:(NSString *)level;
+ (void) endLevel:(LEVEL_RESULT)result Socre:(NSInteger)score Bonus:(NSInteger)bonus;
+ (void) pauseLevel;
+ (void) resumeLevel;

//Session
+ (void) initSession;
+ (void) endSession;
+ (void) pauseSession;
+ (void) resumeSession;

//Game
+ (void) startGame:(NSString *)gameName;
+ (void) pauseGame;
+ (void) resumeGame;
+ (void) finishGameWithGameResult:(BOOL)gameResult MainCurrency:(NSInteger)mainCurrency SecondaryCurrency:(NSInteger)secondaryCurrency Score:(NSInteger)score Bonus:(NSInteger)bonus;

+ (void) refreshProfileData;

+ (void) refreshPromotions;
+ (void) getAllAvailblePromosWithBlock:(GetPromotionArrayFinished)block;

+ (void) promoHadViewed:(Promotion *)promotion;
+ (void) promo:(Promotion *)promotion ButtonClicked:(BOOL)button CancelButton:(BOOL)cancelButton;

@end