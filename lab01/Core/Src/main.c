/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void exercise1(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	HAL_Delay(2000);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void exercise2(){
	//LED_RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_Delay(5000);

	//LED_YELLOW
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_Delay(2000);

	//LED_GREEN
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	HAL_Delay(3000);
}

void exercise3(){
	//LED_RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
	HAL_Delay(5000);

	//RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
	HAL_Delay(2000);

	//RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
	HAL_Delay(3000);

	//LED_RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, SET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
	HAL_Delay(5000);

	//RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, SET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
	HAL_Delay(2000);

	//RED
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
	//YELLOW
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
	//GREEN
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, SET);
	HAL_Delay(3000);
}


void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET); //G
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
		break;
	case 1:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
			break;

	case 2:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;

	case 3:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
			break;
	case 4:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET); //D
			break;
	case 5:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;
	case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;
	case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET); //D
			break;
	case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;
	case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;
	default:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	}
}

void display7Segcountdown(int num){
	switch(num){
		case 9:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
				break;

		case 8:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
				break;
		case 7:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET); //D
				break;
		case 6:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
				break;
		case 5:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
				break;
		case 4:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET); //D
				break;
		case 3:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				break;
		case 2:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
				break;
		case 1:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				break;
		case 0:
				HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET); //G
				HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET); //C
				HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET); //B
				HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET); //A
				HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET); //F
				HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET); //E
				HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET); //D
			break;

	default:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	}
}

void exercise5(){
	for(int i=5; i>=0; i--){
		display7SEG(i);
		//LED_RED
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
		//YELLOW
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
		//GREEN
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, SET);
		if(i<3){
			//LED_RED
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
			//YELLOW
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, SET);
			//GREEN
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
		}
		HAL_Delay(1000);
	}

//	for(int i=3; i>=0; i--){
//		display7SEG(i);
//		//RED
//		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
//		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
//		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
//		HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, SET);
//		//YELLOW
//		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
//		//GREEN
//		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
//		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
//		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
//		HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
//		HAL_Delay(1000);
//	}

	for(int i=5; i>=0; i--){
		display7SEG(i);
		//LED_RED
		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
		HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, SET);
		//YELLOW
		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
		//GREEN
		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
		HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);

		if(i<3){
			//LED_RED
					HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
					HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);
					HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
					HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, SET);
					//YELLOW
					HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
					HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
					HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
					//GREEN
					HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
					HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
					HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
					HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, RESET);
		}

		HAL_Delay(1000);
	}

//	for(int i=3; i>=0; i--){
//		display7SEG(i);
//		//RED
//		HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
//		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
//		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
//		HAL_GPIO_WritePin(LED_RED_3_GPIO_Port, LED_RED_3_Pin, RESET);
//		//YELLOW
//		HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, RESET);
//		HAL_GPIO_WritePin(LED_YELLOW_3_GPIO_Port, LED_YELLOW_3_Pin, RESET);
//		//GREEN
//		HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
//		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
//		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
//		HAL_GPIO_WritePin(LED_GREEN_3_GPIO_Port, LED_GREEN_3_Pin, SET);
//		HAL_Delay(1000);
//	}
}

void clearAllClock(){
	HAL_GPIO_WritePin(CLOCK_1_GPIO_Port, CLOCK_1_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_2_GPIO_Port, CLOCK_2_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_3_GPIO_Port, CLOCK_3_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_4_GPIO_Port, CLOCK_4_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_5_GPIO_Port, CLOCK_5_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_6_GPIO_Port, CLOCK_6_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_7_GPIO_Port, CLOCK_7_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_8_GPIO_Port, CLOCK_8_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_9_GPIO_Port, CLOCK_9_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_10_GPIO_Port, CLOCK_10_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_11_GPIO_Port, CLOCK_11_Pin, RESET);
	HAL_GPIO_WritePin(CLOCK_12_GPIO_Port, CLOCK_12_Pin, RESET);
}

void setNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin(CLOCK_1_GPIO_Port, CLOCK_1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(CLOCK_2_GPIO_Port, CLOCK_2_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(CLOCK_3_GPIO_Port, CLOCK_3_Pin, SET);
		break;

	case 4:
		HAL_GPIO_WritePin(CLOCK_4_GPIO_Port, CLOCK_4_Pin, SET);
		break;

	case 5:
		HAL_GPIO_WritePin(CLOCK_5_GPIO_Port, CLOCK_5_Pin, SET);
		break;

	case 6:
		HAL_GPIO_WritePin(CLOCK_6_GPIO_Port, CLOCK_6_Pin, SET);
		break;

	case 7:
		HAL_GPIO_WritePin(CLOCK_7_GPIO_Port, CLOCK_7_Pin, SET);
		break;

	case 8:
		HAL_GPIO_WritePin(CLOCK_8_GPIO_Port, CLOCK_8_Pin, SET);
		break;

	case 9:
		HAL_GPIO_WritePin(CLOCK_9_GPIO_Port, CLOCK_9_Pin, SET);
		break;

	case 10:
		HAL_GPIO_WritePin(CLOCK_10_GPIO_Port, CLOCK_10_Pin, SET);
		break;

	case 11:
		HAL_GPIO_WritePin(CLOCK_11_GPIO_Port, CLOCK_11_Pin, SET);
		break;

	case 0:
		HAL_GPIO_WritePin(CLOCK_12_GPIO_Port, CLOCK_12_Pin, SET);
		break;

	}
}

void clearNumberOnClock(int num){
	switch(num){
	case 1:
		HAL_GPIO_WritePin(CLOCK_1_GPIO_Port, CLOCK_1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(CLOCK_2_GPIO_Port, CLOCK_2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(CLOCK_3_GPIO_Port, CLOCK_3_Pin, RESET);
		break;

	case 4:
		HAL_GPIO_WritePin(CLOCK_4_GPIO_Port, CLOCK_4_Pin, RESET);
		break;

	case 5:
		HAL_GPIO_WritePin(CLOCK_5_GPIO_Port, CLOCK_5_Pin, RESET);
		break;

	case 6:
		HAL_GPIO_WritePin(CLOCK_6_GPIO_Port, CLOCK_6_Pin, RESET);
		break;

	case 7:
		HAL_GPIO_WritePin(CLOCK_7_GPIO_Port, CLOCK_7_Pin, RESET);
		break;

	case 8:
		HAL_GPIO_WritePin(CLOCK_8_GPIO_Port, CLOCK_8_Pin, RESET);
		break;

	case 9:
		HAL_GPIO_WritePin(CLOCK_9_GPIO_Port, CLOCK_9_Pin, RESET);
		break;

	case 10:
		HAL_GPIO_WritePin(CLOCK_10_GPIO_Port, CLOCK_10_Pin, RESET);
		break;

	case 11:
		HAL_GPIO_WritePin(CLOCK_11_GPIO_Port, CLOCK_11_Pin, RESET);
		break;

	case 0:
		HAL_GPIO_WritePin(CLOCK_12_GPIO_Port, CLOCK_12_Pin, RESET);
		break;
	}
}

//void exercise10(int hour, int minute, int second){
////	for(int i=0; i<=12; i++){
////		if(second>=12) second = 0;
////		if(minute>=12) minute = 0;
////		setNumberOnClock(minute);
////		if(hour>=12) hour = 0;
////		setNumberOnClock(hour);
////		HAL_Delay(1000);
////		second++;
////		for(int j=0; j<=12; j++){
////			minute++;
////			for(int k=0; k<=12; k++){
////				hour++;
////			}
////		}
////		HAL_Delay(1000);
////	}
//
//
//
//
//}


/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
//  int counter = 0;
	int hour = 0 , minute = 0, second = 0;
  while (1)
  {
//	  exercise1();
//	  exercise2();
//	  exercise3();

//	  exercise4;
//		 if(counter>=10) counter = 0;
//		 display7SEG(counter++);
//		 HAL_Delay(1000);

	  exercise5();

//exercise 7
//	  clearAllClock();
//	  if(second>=12) second = 0;
//	  setNumberOnClock(second++);
//	  HAL_Delay(1000);
//exercise 10
//	 exercise10(hour,minute, second);
//	  second = second+1;
//	  if(second >= 60){
//			second = 0;
//			minute = minute+1;
//		}
//		if(minute >= 60){
//			minute = 0;
//			hour = hour+1 ;
//		}
//		if(hour>=12){
//			hour = 0;
//		}
//		clearAllClock();
//
//		setNumberOnClock(second/5);
//		setNumberOnClock(minute/5);
//		setNumberOnClock(hour);
//		HAL_Delay(10);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin
                          |SEG_5_Pin|SEG_6_Pin|CLOCK_7_Pin|CLOCK_8_Pin
                          |CLOCK_9_Pin|CLOCK_10_Pin|CLOCK_11_Pin|CLOCK_12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|CLOCK_1_Pin
                          |CLOCK_2_Pin|CLOCK_3_Pin|CLOCK_4_Pin|CLOCK_5_Pin
                          |CLOCK_6_Pin|LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_GREEN_2_Pin
                          |LED_RED_3_Pin|LED_YELLOW_3_Pin|LED_GREEN_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : SEG_0_Pin SEG_1_Pin SEG_2_Pin SEG_3_Pin
                           SEG_4_Pin LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin
                           SEG_5_Pin SEG_6_Pin CLOCK_7_Pin CLOCK_8_Pin
                           CLOCK_9_Pin CLOCK_10_Pin CLOCK_11_Pin CLOCK_12_Pin */
  GPIO_InitStruct.Pin = SEG_0_Pin|SEG_1_Pin|SEG_2_Pin|SEG_3_Pin
                          |SEG_4_Pin|LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin
                          |SEG_5_Pin|SEG_6_Pin|CLOCK_7_Pin|CLOCK_8_Pin
                          |CLOCK_9_Pin|CLOCK_10_Pin|CLOCK_11_Pin|CLOCK_12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin CLOCK_1_Pin
                           CLOCK_2_Pin CLOCK_3_Pin CLOCK_4_Pin CLOCK_5_Pin
                           CLOCK_6_Pin LED_RED_2_Pin LED_YELLOW_2_Pin LED_GREEN_2_Pin
                           LED_RED_3_Pin LED_YELLOW_3_Pin LED_GREEN_3_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|CLOCK_1_Pin
                          |CLOCK_2_Pin|CLOCK_3_Pin|CLOCK_4_Pin|CLOCK_5_Pin
                          |CLOCK_6_Pin|LED_RED_2_Pin|LED_YELLOW_2_Pin|LED_GREEN_2_Pin
                          |LED_RED_3_Pin|LED_YELLOW_3_Pin|LED_GREEN_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
