/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewControllerDelegate.h"


@protocol WCOutChargeLogicDelegate <MMUIViewControllerDelegate>
@optional
-(void)onPurchaseCancelForProduct:(id)product;
-(void)onPurchaseFailForProduct:(id)product ErrCode:(unsigned long)code;
-(void)onPurchaseSuccessForProduct:(id)product ErrCode:(unsigned long)code;
-(void)updateListFromAppleResponse:(BOOL)appleResponse successSKProductList:(id)list;
-(void)didReceiveGetProductListResponse:(BOOL)response Respone:(id)respone;
@end
