//
//  NumberPad.h
//  CurrencyConverter
//
//  Created by Nick Lockwood on 26/06/2013.
//  Copyright (c) 2013 Charcoal Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NumberPad : UIView

@property (nonatomic, weak) UITextField *inputField;

+ (instancetype)instance;

@end
