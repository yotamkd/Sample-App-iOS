//
// VirtualGood.h
// Created by Applicasa 
// 12/20/2012
//

#import <Foundation/Foundation.h>
#import <LiCore/LiCore.h>
#import "LiBlocks.h"
#import "LiDataTypes.h"
#import <LiKitIAP/LiKitIAP.h>



//*************
//
// VirtualGood Class
//
//

#define kVirtualGoodNotificationString @"VirtualGoodConflictFound"
#define kShouldVirtualGoodWorkOffline YES
@class VirtualGoodCategory;
@interface VirtualGood : LiObject <LiCoreRequestDelegate> {
}

@property (nonatomic, retain) NSString *virtualGoodID;
@property (nonatomic, retain) NSString *virtualGoodTitle;
@property (nonatomic, retain) NSString *virtualGoodDescription;
@property (nonatomic, assign) int virtualGoodMainCurrency;
@property (nonatomic, assign) int virtualGoodSecondaryCurrency;
@property (nonatomic, retain) NSString *virtualGoodRelatedVirtualGood;
@property (nonatomic, assign) int virtualGoodQuantity;
@property (nonatomic, assign) int virtualGoodMaxForUser;
@property (nonatomic, assign) int virtualGoodUserInventory;
@property (nonatomic, retain) NSURL *virtualGoodImageA;
@property (nonatomic, retain) NSURL *virtualGoodImageB;
@property (nonatomic, retain) NSURL *virtualGoodImageC;
@property (nonatomic, assign) BOOL virtualGoodIsDeal;
@property (nonatomic, assign) BOOL virtualGoodConsumable;
@property (nonatomic, retain, readonly) NSDate *virtualGoodLastUpdate;
@property (nonatomic, retain) VirtualGoodCategory *virtualGoodMainCategory;

#pragma mark - End of Basic SDK

/*********************************************************************************
 DEPRECATED METHODS WARNING:
 
 Applicasa is cleaning up its SDK in preparation for upcoming 2.0 release.
 
 Do not use methods marked with DEPRECATED_ATTRIBUTE.
 These methods are deprecated. They are included for backward-compatibility only.
 They will be removed in the final release. You should update your code immediately.
 
 Corrected methods are listed first. Use these methods instead.
 **********************************************************************************/

+ (void) getLocalArrayWithQuery:(LiQuery *)query andBlock:(GetVirtualGoodArrayFinished)block;
+ (void) getArrayWithQuery:(LiQuery *)query WithBlock:(GetVirtualGoodArrayFinished)block DEPRECATED_ATTRIBUTE;

+ (void) getVirtualGoodsOfType:(VirtualGoodType)type withBlock:(GetVirtualGoodArrayFinished)block;
+ (void) getAllVirtualGoodByType:(VirtualGoodType)type WithBlock:(GetVirtualGoodArrayFinished)block DEPRECATED_ATTRIBUTE;

+ (void) getVirtualGoodsOfType:(VirtualGoodType)type andCategory:(VirtualGoodCategory *)category withBlock:(GetVirtualGoodArrayFinished)block;
+ (void) getAllVirtualGoodByType:(VirtualGoodType)type ByCategory:(VirtualGoodCategory *)category WithBlock:(GetVirtualGoodArrayFinished)block DEPRECATED_ATTRIBUTE;

- (void) buyQuantity:(NSInteger)quantity withCurrencyKind:(LiCurrency)currencyKind andBlock:(LiBlockAction)block;
- (void) buyVirtualGoodWithQuantity:(NSInteger)quantity CurrencyKind:(LiCurrency)currencyKind WithBlock:(LiBlockAction)block DEPRECATED_ATTRIBUTE;

- (void) giveQuantity:(NSInteger)quantity withBlock:(LiBlockAction)block;
- (void) giveVirtualGoodWithQuantity:(NSInteger)quantity WithBlock:(LiBlockAction)block DEPRECATED_ATTRIBUTE;

- (void) useQuantity:(NSInteger)quantity withBlock:(LiBlockAction)block;
- (void) useWithQuantity:(NSInteger)quantity WithBlock:(LiBlockAction)block DEPRECATED_ATTRIBUTE;


@end
