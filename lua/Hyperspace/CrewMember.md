---
layout: lua
title: CrewMember
lang: en
---

# Class "CrewMember"


## Constructors
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ()
{: aria-label='Constructors' }

___
### CrewMember ()
{: aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer shipId, boolean enemy, [CrewAnimation](../Hyperspace/CrewAnimation) animation)
{: aria-label='Constructors' }

___



## Static Methods
### GetSkillFromSystem ()
{: aria-label='StaticMethods' }
#### integer .GetSkillFromSystem (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
### ActivatePower ()
{: aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

___
### ApplyDamage ()
{: aria-label='Methods' }
#### boolean :ApplyDamage (number damage)
{: aria-label='Methods' }

___
### AtFinalGoal ()
{: aria-label='Methods' }
#### boolean :AtFinalGoal ()
{: aria-label='Methods' }

___
### AtGoal ()
{: aria-label='Methods' }
#### boolean :AtGoal ()
{: aria-label='Methods' }

___
### BadAtCombat ()
{: aria-label='Methods' }
#### boolean :BadAtCombat ()
{: aria-label='Methods' }

___
### BlockRoom ()
{: aria-label='Methods' }
#### integer :BlockRoom ()
{: aria-label='Methods' }

___
### CanBurn ()
{: aria-label='Methods' }
#### boolean :CanBurn ()
{: aria-label='Methods' }

___
### CanFight ()
{: aria-label='Methods' }
#### boolean :CanFight ()
{: aria-label='Methods' }

___
### CanHeal ()
{: aria-label='Methods' }
#### boolean :CanHeal ()
{: aria-label='Methods' }

___
### CanMan ()
{: aria-label='Methods' }
#### boolean :CanMan ()
{: aria-label='Methods' }

___
### CanRepair ()
{: aria-label='Methods' }
#### boolean :CanRepair ()
{: aria-label='Methods' }

___
### CanSabotage ()
{: aria-label='Methods' }
#### boolean :CanSabotage ()
{: aria-label='Methods' }

___
### CanStim ()
{: aria-label='Methods' }
#### boolean :CanStim ()
{: aria-label='Methods' }

___
### CanSuffocate ()
{: aria-label='Methods' }
#### boolean :CanSuffocate ()
{: aria-label='Methods' }

___
### CanTeleport ()
{: aria-label='Methods' }
#### boolean :CanTeleport ()
{: aria-label='Methods' }

___
### CheckFighting ()
{: aria-label='Methods' }
#### void :CheckFighting ()
{: aria-label='Methods' }

___
### CheckForTeleport ()
{: aria-label='Methods' }
#### void :CheckForTeleport ()
{: aria-label='Methods' }

___
### CheckRoomPath ()
{: aria-label='Methods' }
#### boolean :CheckRoomPath (integer roomId)
{: aria-label='Methods' }

___
### CheckSkills ()
{: aria-label='Methods' }
#### void :CheckSkills ()
{: aria-label='Methods' }

___
### Cleanup ()
{: aria-label='Methods' }
#### void :Cleanup ()
{: aria-label='Methods' }

___
### ClearPath ()
{: aria-label='Methods' }
#### void :ClearPath ()
{: aria-label='Methods' }

___
### ClearPosition ()
{: aria-label='Methods' }
#### void :ClearPosition ()
{: aria-label='Methods' }

___
### ClearTask ()
{: aria-label='Methods' }
#### void :ClearTask ()
{: aria-label='Methods' }

___
### Clone ()
{: aria-label='Methods' }
#### void :Clone ()
{: aria-label='Methods' }

___
### CloseDoorBehind ()
{: aria-label='Methods' }
#### void :CloseDoorBehind ([Door](../Hyperspace/Door) door)
{: aria-label='Methods' }

___
### ContainsPoint ()
{: aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

___
### CountForVictory ()
{: aria-label='Methods' }
#### boolean :CountForVictory ()
{: aria-label='Methods' }

___
### CycleColorLayer ()
{: aria-label='Methods' }
#### void :CycleColorLayer (integer unk)
{: aria-label='Methods' }

___
### DirectModifyHealth ()
{: aria-label='Methods' }
#### boolean :DirectModifyHealth (number health)
{: aria-label='Methods' }

___
### EmptySlot ()
{: aria-label='Methods' }
#### void :EmptySlot ()
{: aria-label='Methods' }

___
### ExactTarget ()
{: aria-label='Methods' }
#### boolean :ExactTarget ()
{: aria-label='Methods' }

___
### FindSlot ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :FindSlot (integer roomId, integer slotId, boolean closeEnough)
{: aria-label='Methods' }

___
### FireFightingSoundEffect ()
{: aria-label='Methods' }
#### boolean :FireFightingSoundEffect ()
{: aria-label='Methods' }

___
### ForceMindControl ()
{: aria-label='Methods' }
#### void :ForceMindControl (boolean force)
{: aria-label='Methods' }

___
### Functional ()
{: aria-label='Methods' }
#### boolean :Functional ()
{: aria-label='Methods' }

___
### GetControllable ()
{: aria-label='Methods' }
#### boolean :GetControllable ()
{: aria-label='Methods' }

___
### GetDamageMultiplier ()
{: aria-label='Methods' }
#### number :GetDamageMultiplier ()
{: aria-label='Methods' }

___
### GetFinalGoal ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetFinalGoal ()
{: aria-label='Methods' }

___
### GetFireRepairMultiplier ()
{: aria-label='Methods' }
#### number :GetFireRepairMultiplier ()
{: aria-label='Methods' }

___
### GetIntegerHealth ()
{: aria-label='Methods' }
#### integer :GetIntegerHealth ()
{: aria-label='Methods' }

___
### GetIntruder ()
{: aria-label='Methods' }
#### boolean :GetIntruder ()
{: aria-label='Methods' }

___
### GetLocation ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetLocation ()
{: aria-label='Methods' }

___
### GetLongName ()
{: aria-label='Methods' }
#### string :GetLongName ()
{: aria-label='Methods' }

___
### GetMaxHealth ()
{: aria-label='Methods' }
#### integer :GetMaxHealth ()
{: aria-label='Methods' }

___
### GetMoveSpeed ()
{: aria-label='Methods' }
#### number :GetMoveSpeed ()
{: aria-label='Methods' }

___
### GetMoveSpeedMultiplier ()
{: aria-label='Methods' }
#### number :GetMoveSpeedMultiplier ()
{: aria-label='Methods' }

___
### GetName ()
{: aria-label='Methods' }
#### string :GetName ()
{: aria-label='Methods' }

___
### GetNewGoal ()
{: aria-label='Methods' }
#### boolean :GetNewGoal ()
{: aria-label='Methods' }

___
### GetNextGoal ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetNextGoal ()
{: aria-label='Methods' }

___
### GetPosition ()
{: aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetPosition ()
{: aria-label='Methods' }

___
### GetPowerCooldown ()
{: aria-label='Methods' }
#### pair\<number, number\> :GetPowerCooldown ()
{: aria-label='Methods' }

___
### GetPriority ()
{: aria-label='Methods' }
#### integer :GetPriority ()
{: aria-label='Methods' }

___
### GetRepairSpeed ()
{: aria-label='Methods' }
#### number :GetRepairSpeed ()
{: aria-label='Methods' }

___
### GetRepairingId ()
{: aria-label='Methods' }
#### integer :GetRepairingId ()
{: aria-label='Methods' }

___
### GetResisted ()
{: aria-label='Methods' }
#### boolean :GetResisted ()
{: aria-label='Methods' }

___
### GetRoomDamage ()
{: aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetRoomDamage ()
{: aria-label='Methods' }

___
### GetSavedPosition ()
{: aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetSavedPosition ()
{: aria-label='Methods' }

___
### GetSkillLevel ()
{: aria-label='Methods' }
#### integer :GetSkillLevel (integer skillId)
{: aria-label='Methods' }

___
### GetSkillModifier ()
{: aria-label='Methods' }
#### number :GetSkillModifier (integer skillId)
{: aria-label='Methods' }

___
### GetSkillProgress ()
{: aria-label='Methods' }
#### pair\<integer, integer\> :GetSkillProgress (integer skillId)
{: aria-label='Methods' }

___
### GetSpecies ()
{: aria-label='Methods' }
#### string :GetSpecies ()
{: aria-label='Methods' }

___
### GetSuffocationMultiplier ()
{: aria-label='Methods' }
#### number :GetSuffocationMultiplier ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: aria-label='Methods' }
#### string :GetTooltip ()
{: aria-label='Methods' }

___
### GetUniqueRepairing ()
{: aria-label='Methods' }
#### string :GetUniqueRepairing ()
{: aria-label='Methods' }

___
### HasSpecialPower ()
{: aria-label='Methods' }
#### boolean :HasSpecialPower ()
{: aria-label='Methods' }

___
### IncreaseSkill ()
{: aria-label='Methods' }
#### void :IncreaseSkill (integer skillId)
{: aria-label='Methods' }

___
### InitializeSkills ()
{: aria-label='Methods' }
#### void :InitializeSkills ()
{: aria-label='Methods' }

___
### InsideRoom ()
{: aria-label='Methods' }
#### boolean :InsideRoom (integer roomId)
{: aria-label='Methods' }

___
### IsAnaerobic ()
{: aria-label='Methods' }
#### boolean :IsAnaerobic ()
{: aria-label='Methods' }

___
### IsBusy ()
{: aria-label='Methods' }
#### boolean :IsBusy ()
{: aria-label='Methods' }

___
### IsCloned ()
{: aria-label='Methods' }
#### boolean :IsCloned ()
{: aria-label='Methods' }

___
### IsCrew ()
{: aria-label='Methods' }
#### boolean :IsCrew ()
{: aria-label='Methods' }

___
### IsDead ()
{: aria-label='Methods' }
#### boolean :IsDead ()
{: aria-label='Methods' }

___
### IsDrone ()
{: aria-label='Methods' }
#### boolean :IsDrone ()
{: aria-label='Methods' }

___
### IsManningArtillery ()
{: aria-label='Methods' }
#### boolean :IsManningArtillery ()
{: aria-label='Methods' }

___
### IsTelepathic ()
{: aria-label='Methods' }
#### boolean :IsTelepathic ()
{: aria-label='Methods' }

___
### Jump ()
{: aria-label='Methods' }
#### void :Jump ()
{: aria-label='Methods' }

___
### Kill ()
{: aria-label='Methods' }
#### void :Kill (boolean noClone)
{: aria-label='Methods' }

___
### LoadState ()
{: aria-label='Methods' }
#### void :LoadState (integer fileHelper)
{: aria-label='Methods' }

___
### MasterSkill ()
{: aria-label='Methods' }
#### void :MasterSkill (integer skillId)
{: aria-label='Methods' }

___
### ModifyHealth ()
{: aria-label='Methods' }
#### void :ModifyHealth (number health)
{: aria-label='Methods' }

___
### MoveToRoom ()
{: aria-label='Methods' }
#### boolean :MoveToRoom (integer roomId, integer slotId, boolean forceMove)
{: aria-label='Methods' }

___
### MultiShots ()
{: aria-label='Methods' }
#### boolean :MultiShots ()
{: aria-label='Methods' }

___
### NeedFrozenLocation ()
{: aria-label='Methods' }
#### boolean :NeedFrozenLocation ()
{: aria-label='Methods' }

___
### NeedsSlot ()
{: aria-label='Methods' }
#### boolean :NeedsSlot ()
{: aria-label='Methods' }

___
### OnInit ()
{: aria-label='Methods' }
#### boolean :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: aria-label='Methods' }
#### void :OnRender (boolean outlineOnly)
{: aria-label='Methods' }

___
### OnRenderHealth ()
{: aria-label='Methods' }
#### void :OnRenderHealth ()
{: aria-label='Methods' }

___
### OnRenderPath ()
{: aria-label='Methods' }
#### void :OnRenderPath ()
{: aria-label='Methods' }

___
### OutOfGame ()
{: aria-label='Methods' }
#### boolean :OutOfGame ()
{: aria-label='Methods' }

___
### PermanentDeath ()
{: aria-label='Methods' }
#### boolean :PermanentDeath ()
{: aria-label='Methods' }

___
### PositionShift ()
{: aria-label='Methods' }
#### number :PositionShift ()
{: aria-label='Methods' }

___
### PowerReady ()
{: aria-label='Methods' }
#### boolean :PowerReady ()
{: aria-label='Methods' }

___
### ProvidesPower ()
{: aria-label='Methods' }
#### boolean :ProvidesPower ()
{: aria-label='Methods' }

___
### ProvidesVision ()
{: aria-label='Methods' }
#### boolean :ProvidesVision ()
{: aria-label='Methods' }

___
### ReadyToFight ()
{: aria-label='Methods' }
#### boolean :ReadyToFight ()
{: aria-label='Methods' }

___
### RenderSkillUpAnimation ()
{: aria-label='Methods' }
#### void :RenderSkillUpAnimation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### Repairing ()
{: aria-label='Methods' }
#### boolean :Repairing ()
{: aria-label='Methods' }

___
### RepairingFire ()
{: aria-label='Methods' }
#### boolean :RepairingFire ()
{: aria-label='Methods' }

___
### RepairingSystem ()
{: aria-label='Methods' }
#### boolean :RepairingSystem ()
{: aria-label='Methods' }

___
### ResetPower ()
{: aria-label='Methods' }
#### void :ResetPower ()
{: aria-label='Methods' }

___
### Restart ()
{: aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

___
### RestorePosition ()
{: aria-label='Methods' }
#### boolean :RestorePosition ()
{: aria-label='Methods' }

___
### Sabotaging ()
{: aria-label='Methods' }
#### boolean :Sabotaging ()
{: aria-label='Methods' }

___
### SavePosition ()
{: aria-label='Methods' }
#### void :SavePosition ()
{: aria-label='Methods' }

___
### SaveState ()
{: aria-label='Methods' }
#### void :SaveState (integer fileHelper)
{: aria-label='Methods' }

___
### SelectSabotageTarget ()
{: aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :SelectSabotageTarget ()
{: aria-label='Methods' }

___
### SetCloneReady ()
{: aria-label='Methods' }
#### void :SetCloneReady (boolean cloneReady)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetCurrentSystem ()
{: aria-label='Methods' }
#### void :SetCurrentSystem ([ShipSystem](../Hyperspace/ShipSystem) sys)
{: aria-label='Methods' }

___
### SetCurrentTarget ()
{: aria-label='Methods' }
#### void :SetCurrentTarget ([StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) target, boolean unk)
{: aria-label='Methods' }

___
### SetDamageBoost ()
{: aria-label='Methods' }
#### void :SetDamageBoost (number damageBoost)
{: aria-label='Methods' }

___
### SetDeathNumber ()
{: aria-label='Methods' }
#### void :SetDeathNumber (integer deathNum)
{: aria-label='Methods' }

___
### SetFrozen ()
{: aria-label='Methods' }
#### void :SetFrozen (boolean frozen)
{: aria-label='Methods' }

___
### SetFrozenLocation ()
{: aria-label='Methods' }
#### void :SetFrozenLocation (boolean frozenLocation)
{: aria-label='Methods' }

___
### SetHealthBoost ()
{: aria-label='Methods' }
#### void :SetHealthBoost (integer healthBoost)
{: aria-label='Methods' }

___
### SetMedbay ()
{: aria-label='Methods' }
#### void :SetMedbay (number health)
{: aria-label='Methods' }

___
### SetMindControl ()
{: aria-label='Methods' }
#### void :SetMindControl (boolean controlled)
{: aria-label='Methods' }

___
### SetName ()
{: aria-label='Methods' }
#### void :SetName ([TextString](../Hyperspace/TextString) name, boolean force)
{: aria-label='Methods' }

___
### SetOutOfGame ()
{: aria-label='Methods' }
#### void :SetOutOfGame ()
{: aria-label='Methods' }

___
### SetPath ()
{: aria-label='Methods' }
#### boolean :SetPath (Path path)
{: aria-label='Methods' }

___
### SetPosition ()
{: aria-label='Methods' }
#### void :SetPosition ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### SetResisted ()
{: aria-label='Methods' }
#### void :SetResisted (boolean resisted)
{: aria-label='Methods' }

___
### SetRoom ()
{: aria-label='Methods' }
#### void :SetRoom (integer roomId)
{: aria-label='Methods' }

___
### SetRoomPath ()
{: aria-label='Methods' }
#### void :SetRoomPath (integer slotId, integer roomId)
{: aria-label='Methods' }

___
### SetSavePosition ()
{: aria-label='Methods' }
#### void :SetSavePosition ([Slot](../Hyperspace/Slot) position)
{: aria-label='Methods' }

___
### SetSex ()
{: aria-label='Methods' }
#### void :SetSex (boolean male)
{: aria-label='Methods' }

___
### SetSkillProgress ()
{: aria-label='Methods' }
#### void :SetSkillProgress (integer skillId, integer skillLevel)
{: aria-label='Methods' }

___
### SetTask ()
{: aria-label='Methods' }
#### void :SetTask (CrewTask task)
{: aria-label='Methods' }

___
### ShipDamage ()
{: aria-label='Methods' }
#### boolean :ShipDamage (number damage)
{: aria-label='Methods' }

___
### StartRepair ()
{: aria-label='Methods' }
#### void :StartRepair ([Repairable](../Hyperspace/Repairable) toRepair)
{: aria-label='Methods' }

___
### StartTeleport ()
{: aria-label='Methods' }
#### void :StartTeleport ()
{: aria-label='Methods' }

___
### StartTeleportArrive ()
{: aria-label='Methods' }
#### void :StartTeleportArrive ()
{: aria-label='Methods' }

___
### StopRepairing ()
{: aria-label='Methods' }
#### void :StopRepairing ()
{: aria-label='Methods' }

___
### UpdateHealth ()
{: aria-label='Methods' }
#### void :UpdateHealth ()
{: aria-label='Methods' }

___
### UpdateMovement ()
{: aria-label='Methods' }
#### void :UpdateMovement ()
{: aria-label='Methods' }

___
### UpdateRepair ()
{: aria-label='Methods' }
#### void :UpdateRepair ()
{: aria-label='Methods' }

___
### ValidTarget ()
{: aria-label='Methods' }
#### boolean :ValidTarget (integer unk)
{: aria-label='Methods' }

___
### WithinRect ()
{: aria-label='Methods' }
#### boolean :WithinRect (integer x, integer y, integer w, integer h)
{: aria-label='Methods' }

___


## Fields
### bActiveManning
{: aria-label='Fields' }
#### boolean .bActiveManning
{: aria-label='Fields' }

___
### bCloned
{: aria-label='Fields' }
#### boolean .bCloned
{: aria-label='Fields' }

___
### bDead
{: aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### bFighting
{: aria-label='Fields' }
#### boolean .bFighting
{: aria-label='Fields' }

___
### bFrozen
{: aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

___
### bFrozenLocation
{: aria-label='Fields' }
#### boolean .bFrozenLocation
{: aria-label='Fields' }

___
### bMindControlled
{: aria-label='Fields' }
#### boolean .bMindControlled
{: aria-label='Fields' }

___
### bOutOfGame
{: aria-label='Fields' }
#### boolean .bOutOfGame
{: aria-label='Fields' }

___
### bResisted
{: aria-label='Fields' }
#### boolean .bResisted
{: aria-label='Fields' }

___
### bSharedSpot
{: aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

___
### bSuffocating
{: aria-label='Fields' }
#### boolean .bSuffocating
{: aria-label='Fields' }

___
### blockingDoor
{: aria-label='Fields' }
#### [Door](../Hyperspace/Door) .blockingDoor
{: aria-label='Fields' }

___
### blueprint
{: aria-label='Fields' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) .blueprint
{: aria-label='Fields' }

___
### boardingGoal
{: aria-label='Fields' }
#### BoardingGoal .boardingGoal
{: aria-label='Fields' }

___
### clone_ready
{: aria-label='Fields' }
#### boolean .clone_ready
{: aria-label='Fields' }

___
### crewAnim
{: aria-label='Fields' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) .crewAnim
{: aria-label='Fields' }

___
### crewTarget
{: aria-label='Fields' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Fields' }

___
### currentRepair
{: aria-label='Fields' }
#### [Repairable](../Hyperspace/Repairable) .currentRepair
{: aria-label='Fields' }

___
### currentShipId
{: aria-label='Fields' }
#### integer .currentShipId
{: aria-label='Fields' }

___
### currentSlot
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .currentSlot
{: aria-label='Fields' }

___
### currentSystem
{: aria-label='Fields' }
#### [ShipSystem](../Hyperspace/ShipSystem) .currentSystem
{: aria-label='Fields' }

___
### currentTarget
{: aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentTarget
{: aria-label='Fields' }

___
### extend (Read-only)
{: aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .extend
{: aria-label='Fields' }

___
### fCloneDying
{: aria-label='Fields' }
#### number .fCloneDying
{: aria-label='Fields' }

___
### fMedbay
{: aria-label='Fields' }
#### number .fMedbay
{: aria-label='Fields' }

___
### fMindDamageBoost
{: aria-label='Fields' }
#### number .fMindDamageBoost
{: aria-label='Fields' }

___
### fStunTime
{: aria-label='Fields' }
#### number .fStunTime
{: aria-label='Fields' }

___
### finalGoal
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .finalGoal
{: aria-label='Fields' }

___
### flashHealthTracker
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashHealthTracker
{: aria-label='Fields' }

___
### goal_x
{: aria-label='Fields' }
#### number .goal_x
{: aria-label='Fields' }

___
### goal_y
{: aria-label='Fields' }
#### number .goal_y
{: aria-label='Fields' }

___
### healing
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .healing
{: aria-label='Fields' }

___
### health
{: aria-label='Fields' }
#### pair\<number, number\> .health
{: aria-label='Fields' }

___
### healthBar
{: aria-label='Fields' }
#### CachedRect .healthBar
{: aria-label='Fields' }

___
### healthBoost
{: aria-label='Fields' }
#### integer .healthBoost
{: aria-label='Fields' }

___
### healthBox
{: aria-label='Fields' }
#### CachedImage .healthBox
{: aria-label='Fields' }

___
### healthBoxRed
{: aria-label='Fields' }
#### CachedImage .healthBoxRed
{: aria-label='Fields' }

___
### height
{: aria-label='Fields' }
#### integer .height
{: aria-label='Fields' }

___
### iDeathNumber
{: aria-label='Fields' }
#### integer .iDeathNumber
{: aria-label='Fields' }

___
### iManningId
{: aria-label='Fields' }
#### integer .iManningId
{: aria-label='Fields' }

___
### iOnFire
{: aria-label='Fields' }
#### integer .iOnFire
{: aria-label='Fields' }

___
### iRepairId
{: aria-label='Fields' }
#### integer .iRepairId
{: aria-label='Fields' }

___
### iRoomId
{: aria-label='Fields' }
#### integer .iRoomId
{: aria-label='Fields' }

___
### iShipId
{: aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
### iStackId
{: aria-label='Fields' }
#### integer .iStackId
{: aria-label='Fields' }

___
### intruder
{: aria-label='Fields' }
#### boolean .intruder
{: aria-label='Fields' }

___
### lastDamageTimer
{: aria-label='Fields' }
#### number .lastDamageTimer
{: aria-label='Fields' }

___
### lastHealthChange
{: aria-label='Fields' }
#### number .lastHealthChange
{: aria-label='Fields' }

___
### lastLevelUp
{: aria-label='Fields' }
#### integer .lastLevelUp
{: aria-label='Fields' }

___
### last_door
{: aria-label='Fields' }
#### [Door](../Hyperspace/Door) .last_door
{: aria-label='Fields' }

___
### levelUp
{: aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .levelUp
{: aria-label='Fields' }

___
### mindControlled
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .mindControlled
{: aria-label='Fields' }

___
### moveGoal
{: aria-label='Fields' }
#### integer .moveGoal
{: aria-label='Fields' }

___
### movementTarget
{: aria-label='Fields' }
#### CachedImage .movementTarget
{: aria-label='Fields' }

___
### new_path
{: aria-label='Fields' }
#### boolean .new_path
{: aria-label='Fields' }

___
### path
{: aria-label='Fields' }
#### Path .path
{: aria-label='Fields' }

___
### savedPosition
{: aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .savedPosition
{: aria-label='Fields' }

___
### scale
{: aria-label='Fields' }
#### number .scale
{: aria-label='Fields' }

___
### selectionImage
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selectionImage
{: aria-label='Fields' }

___
### selectionState
{: aria-label='Fields' }
#### integer .selectionState
{: aria-label='Fields' }

___
### ship
{: aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }

___
### size
{: aria-label='Fields' }
#### number .size
{: aria-label='Fields' }

___
### skillUp
{: aria-label='Fields' }
#### vector\<vector\<[AnimationTracker](../Hyperspace/AnimationTracker)\>\> .skillUp
{: aria-label='Fields' }

___
### skillsEarned
{: aria-label='Fields' }
#### vector\<vector\<boolean\>\> .skillsEarned
{: aria-label='Fields' }

___
### species
{: aria-label='Fields' }
#### string .species
{: aria-label='Fields' }

___
### speed_x
{: aria-label='Fields' }
#### number .speed_x
{: aria-label='Fields' }

___
### speed_y
{: aria-label='Fields' }
#### number .speed_y
{: aria-label='Fields' }

___
### stats
{: aria-label='Fields' }
#### [SCrewStats](../Hyperspace/SCrewStats) .stats
{: aria-label='Fields' }

___
### stunIcon
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunIcon
{: aria-label='Fields' }

___
### stunned
{: aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunned
{: aria-label='Fields' }

___
### task
{: aria-label='Fields' }
#### CrewTask .task
{: aria-label='Fields' }

___
### type
{: aria-label='Fields' }
#### string .type
{: aria-label='Fields' }

___
### usingSkill
{: aria-label='Fields' }
#### integer .usingSkill
{: aria-label='Fields' }

___
### width
{: aria-label='Fields' }
#### integer .width
{: aria-label='Fields' }

___
### x (Read-only)
{: aria-label='Fields' }
#### number .x
{: aria-label='Fields' }
**read-only**

___
### x_destination
{: aria-label='Fields' }
#### number .x_destination
{: aria-label='Fields' }

___
### y (Read-only)
{: aria-label='Fields' }
#### number .y
{: aria-label='Fields' }
**read-only**

___
### y_destination
{: aria-label='Fields' }
#### number .y_destination
{: aria-label='Fields' }

___
